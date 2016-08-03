// Generated by gencpp from file test_bond/TestBondRequest.msg
// DO NOT EDIT!


#ifndef TEST_BOND_MESSAGE_TESTBONDREQUEST_H
#define TEST_BOND_MESSAGE_TESTBONDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test_bond
{
template <class ContainerAllocator>
struct TestBondRequest_
{
  typedef TestBondRequest_<ContainerAllocator> Type;

  TestBondRequest_()
    : topic()
    , id()
    , delay_connect()
    , delay_death()
    , inhibit_death(false)
    , inhibit_death_message(false)  {
    }
  TestBondRequest_(const ContainerAllocator& _alloc)
    : topic(_alloc)
    , id(_alloc)
    , delay_connect()
    , delay_death()
    , inhibit_death(false)
    , inhibit_death_message(false)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topic_type;
  _topic_type topic;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _id_type;
  _id_type id;

   typedef ros::Duration _delay_connect_type;
  _delay_connect_type delay_connect;

   typedef ros::Duration _delay_death_type;
  _delay_death_type delay_death;

   typedef uint8_t _inhibit_death_type;
  _inhibit_death_type inhibit_death;

   typedef uint8_t _inhibit_death_message_type;
  _inhibit_death_message_type inhibit_death_message;




  typedef boost::shared_ptr< ::test_bond::TestBondRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_bond::TestBondRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TestBondRequest_

typedef ::test_bond::TestBondRequest_<std::allocator<void> > TestBondRequest;

typedef boost::shared_ptr< ::test_bond::TestBondRequest > TestBondRequestPtr;
typedef boost::shared_ptr< ::test_bond::TestBondRequest const> TestBondRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_bond::TestBondRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_bond::TestBondRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_bond

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_bond::TestBondRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_bond::TestBondRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_bond::TestBondRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_bond::TestBondRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_bond::TestBondRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_bond::TestBondRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_bond::TestBondRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1c7d43df2e371719140975f9c404a8bb";
  }

  static const char* value(const ::test_bond::TestBondRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1c7d43df2e371719ULL;
  static const uint64_t static_value2 = 0x140975f9c404a8bbULL;
};

template<class ContainerAllocator>
struct DataType< ::test_bond::TestBondRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_bond/TestBondRequest";
  }

  static const char* value(const ::test_bond::TestBondRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_bond::TestBondRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string topic\n\
string id\n\
duration delay_connect\n\
duration delay_death\n\
bool inhibit_death\n\
bool inhibit_death_message\n\
";
  }

  static const char* value(const ::test_bond::TestBondRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_bond::TestBondRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.topic);
      stream.next(m.id);
      stream.next(m.delay_connect);
      stream.next(m.delay_death);
      stream.next(m.inhibit_death);
      stream.next(m.inhibit_death_message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct TestBondRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_bond::TestBondRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_bond::TestBondRequest_<ContainerAllocator>& v)
  {
    s << indent << "topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topic);
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.id);
    s << indent << "delay_connect: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.delay_connect);
    s << indent << "delay_death: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.delay_death);
    s << indent << "inhibit_death: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.inhibit_death);
    s << indent << "inhibit_death_message: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.inhibit_death_message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_BOND_MESSAGE_TESTBONDREQUEST_H
