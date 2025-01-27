// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * @file HelloWorld_main.cpp
 *
 */

#include "HelloWorldPublisher.h"
#include "HelloWorldSubscriber.h"

#include <fastrtps/Domain.h>
#include <fastrtps/log/Log.h>

using namespace eprosima;
using namespace fastrtps;
using namespace rtps;
int main(int argc, char** argv)     //启动时输入pub或sub选择端，储存在数组argv的第一个元素中
{
    std::cout << "Starting "<< std::endl;
    int type = 1;
    int count = 10;
    long sleep = 100;
    if(argc > 1)
    {
        //服务器端行为
        if(strcmp(argv[1],"publisher")==0)
        {
            type = 1;
            if (argc >= 3)
            {
                count = atoi(argv[2]); //atoi将字符串转换为整数
                if (argc == 4)
                {
                    sleep = atoi(argv[3]);
                }
            }
        }
        //客户端行为
        else if(strcmp(argv[1],"subscriber")==0)
            type = 2;
    }
    else
    {
        std::cout << "publisher OR subscriber argument needed" << std::endl;
        Log::Reset();
        return 0;
    }

    switch(type)
    {
        //服务器
        case 1:
            {
                HelloWorldPublisher mypub;  //创建一个服务器实例：mypub
                if(mypub.init())
                {
                    mypub.run(count, sleep);  //运行run()函数，带参数，10，100
                }
                break;
            }
        //客户端
        case 2:
            {
                HelloWorldSubscriber mysub;
                if(mysub.init())
                {
                    mysub.run();
                }
                break;
            }
    }
    Domain::stopAll();
    Log::Reset();
    return 0;
}
//hhh
