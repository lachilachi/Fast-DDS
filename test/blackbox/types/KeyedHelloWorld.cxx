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

/*!
 * @file KeyedHelloWorld.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "KeyedHelloWorld.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

KeyedHelloWorld::KeyedHelloWorld()
{
    // m_key com.eprosima.idl.parser.typecode.PrimitiveTypeCode@2f490758
    m_key = 0;
    // m_index com.eprosima.idl.parser.typecode.PrimitiveTypeCode@101df177
    m_index = 0;
    // m_message com.eprosima.idl.parser.typecode.StringTypeCode@166fa74d
    m_message ="";

}

KeyedHelloWorld::~KeyedHelloWorld()
{



}

KeyedHelloWorld::KeyedHelloWorld(
        const KeyedHelloWorld& x)
{
    m_key = x.m_key;
    m_index = x.m_index;
    m_message = x.m_message;
}

KeyedHelloWorld::KeyedHelloWorld(
        KeyedHelloWorld&& x)
{
    m_key = x.m_key;
    m_index = x.m_index;
    m_message = std::move(x.m_message);
}

KeyedHelloWorld& KeyedHelloWorld::operator =(
        const KeyedHelloWorld& x)
{

    m_key = x.m_key;
    m_index = x.m_index;
    m_message = x.m_message;

    return *this;
}

KeyedHelloWorld& KeyedHelloWorld::operator =(
        KeyedHelloWorld&& x)
{

    m_key = x.m_key;
    m_index = x.m_index;
    m_message = std::move(x.m_message);

    return *this;
}

bool KeyedHelloWorld::operator ==(
        const KeyedHelloWorld& x)
{

    return (m_key == x.m_key && m_index == x.m_index && m_message == x.m_message);
}

bool KeyedHelloWorld::operator !=(
        const KeyedHelloWorld& x)
{
    return !(*this == x);
}

size_t KeyedHelloWorld::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 128 + 1;


    return current_alignment - initial_alignment;
}

size_t KeyedHelloWorld::getCdrSerializedSize(
        const KeyedHelloWorld& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.message().size() + 1;


    return current_alignment - initial_alignment;
}

void KeyedHelloWorld::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_key;
    scdr << m_index;
    scdr << m_message;

}

void KeyedHelloWorld::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_key;
    dcdr >> m_index;
    dcdr >> m_message;
}

/*!
 * @brief This function sets a value in member key
 * @param _key New value for member key
 */
void KeyedHelloWorld::key(
        uint16_t _key)
{
    m_key = _key;
}

/*!
 * @brief This function returns the value of member key
 * @return Value of member key
 */
uint16_t KeyedHelloWorld::key() const
{
    return m_key;
}

/*!
 * @brief This function returns a reference to member key
 * @return Reference to member key
 */
uint16_t& KeyedHelloWorld::key()
{
    return m_key;
}

/*!
 * @brief This function sets a value in member index
 * @param _index New value for member index
 */
void KeyedHelloWorld::index(
        uint16_t _index)
{
    m_index = _index;
}

/*!
 * @brief This function returns the value of member index
 * @return Value of member index
 */
uint16_t KeyedHelloWorld::index() const
{
    return m_index;
}

/*!
 * @brief This function returns a reference to member index
 * @return Reference to member index
 */
uint16_t& KeyedHelloWorld::index()
{
    return m_index;
}

/*!
 * @brief This function copies the value in member message
 * @param _message New value to be copied in member message
 */
void KeyedHelloWorld::message(
        const std::string& _message)
{
    m_message = _message;
}

/*!
 * @brief This function moves the value in member message
 * @param _message New value to be moved in member message
 */
void KeyedHelloWorld::message(
        std::string&& _message)
{
    m_message = std::move(_message);
}

/*!
 * @brief This function returns a constant reference to member message
 * @return Constant reference to member message
 */
const std::string& KeyedHelloWorld::message() const
{
    return m_message;
}

/*!
 * @brief This function returns a reference to member message
 * @return Reference to member message
 */
std::string& KeyedHelloWorld::message()
{
    return m_message;
}

size_t KeyedHelloWorld::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;


     current_align += 2 + eprosima::fastcdr::Cdr::alignment(current_align, 2);

     



    return current_align;
}

bool KeyedHelloWorld::isKeyDefined()
{
    return true;
}

void KeyedHelloWorld::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     scdr << m_key;
        
}