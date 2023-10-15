# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lt:srv/Addtwo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Addtwo_Request(type):
    """Metaclass of message 'Addtwo_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lt')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lt.srv.Addtwo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__addtwo__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__addtwo__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__addtwo__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__addtwo__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__addtwo__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Addtwo_Request(metaclass=Metaclass_Addtwo_Request):
    """Message class 'Addtwo_Request'."""

    __slots__ = [
        '_a',
        '_b',
    ]

    _fields_and_field_types = {
        'a': 'int32',
        'b': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.a = kwargs.get('a', int())
        self.b = kwargs.get('b', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.a != other.a:
            return False
        if self.b != other.b:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def a(self):
        """Message field 'a'."""
        return self._a

    @a.setter
    def a(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'a' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'a' field must be an integer in [-2147483648, 2147483647]"
        self._a = value

    @builtins.property
    def b(self):
        """Message field 'b'."""
        return self._b

    @b.setter
    def b(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'b' field must be an integer in [-2147483648, 2147483647]"
        self._b = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Addtwo_Response(type):
    """Metaclass of message 'Addtwo_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lt')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lt.srv.Addtwo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__addtwo__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__addtwo__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__addtwo__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__addtwo__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__addtwo__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Addtwo_Response(metaclass=Metaclass_Addtwo_Response):
    """Message class 'Addtwo_Response'."""

    __slots__ = [
        '_sum',
    ]

    _fields_and_field_types = {
        'sum': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sum = kwargs.get('sum', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.sum != other.sum:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def sum(self):  # noqa: A003
        """Message field 'sum'."""
        return self._sum

    @sum.setter  # noqa: A003
    def sum(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sum' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sum' field must be an integer in [-2147483648, 2147483647]"
        self._sum = value


class Metaclass_Addtwo(type):
    """Metaclass of service 'Addtwo'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lt')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lt.srv.Addtwo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__addtwo

            from lt.srv import _addtwo
            if _addtwo.Metaclass_Addtwo_Request._TYPE_SUPPORT is None:
                _addtwo.Metaclass_Addtwo_Request.__import_type_support__()
            if _addtwo.Metaclass_Addtwo_Response._TYPE_SUPPORT is None:
                _addtwo.Metaclass_Addtwo_Response.__import_type_support__()


class Addtwo(metaclass=Metaclass_Addtwo):
    from lt.srv._addtwo import Addtwo_Request as Request
    from lt.srv._addtwo import Addtwo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
