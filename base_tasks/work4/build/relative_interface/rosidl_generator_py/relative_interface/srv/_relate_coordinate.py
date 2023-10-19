# generated from rosidl_generator_py/resource/_idl.py.em
# with input from relative_interface:srv/RelateCoordinate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RelateCoordinate_Request(type):
    """Metaclass of message 'RelateCoordinate_Request'."""

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
            module = import_type_support('relative_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'relative_interface.srv.RelateCoordinate_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__relate_coordinate__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__relate_coordinate__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__relate_coordinate__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__relate_coordinate__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__relate_coordinate__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RelateCoordinate_Request(metaclass=Metaclass_RelateCoordinate_Request):
    """Message class 'RelateCoordinate_Request'."""

    __slots__ = [
        '_offset_theta',
        '_offset_x',
        '_offset_y',
        '_x',
        '_y',
    ]

    _fields_and_field_types = {
        'offset_theta': 'double',
        'offset_x': 'double',
        'offset_y': 'double',
        'x': 'double',
        'y': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.offset_theta = kwargs.get('offset_theta', float())
        self.offset_x = kwargs.get('offset_x', float())
        self.offset_y = kwargs.get('offset_y', float())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())

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
        if self.offset_theta != other.offset_theta:
            return False
        if self.offset_x != other.offset_x:
            return False
        if self.offset_y != other.offset_y:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def offset_theta(self):
        """Message field 'offset_theta'."""
        return self._offset_theta

    @offset_theta.setter
    def offset_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offset_theta' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'offset_theta' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._offset_theta = value

    @builtins.property
    def offset_x(self):
        """Message field 'offset_x'."""
        return self._offset_x

    @offset_x.setter
    def offset_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offset_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'offset_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._offset_x = value

    @builtins.property
    def offset_y(self):
        """Message field 'offset_y'."""
        return self._offset_y

    @offset_y.setter
    def offset_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offset_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'offset_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._offset_y = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_RelateCoordinate_Response(type):
    """Metaclass of message 'RelateCoordinate_Response'."""

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
            module = import_type_support('relative_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'relative_interface.srv.RelateCoordinate_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__relate_coordinate__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__relate_coordinate__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__relate_coordinate__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__relate_coordinate__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__relate_coordinate__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RelateCoordinate_Response(metaclass=Metaclass_RelateCoordinate_Response):
    """Message class 'RelateCoordinate_Response'."""

    __slots__ = [
        '_x',
        '_y',
    ]

    _fields_and_field_types = {
        'x': 'double',
        'y': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value


class Metaclass_RelateCoordinate(type):
    """Metaclass of service 'RelateCoordinate'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('relative_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'relative_interface.srv.RelateCoordinate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__relate_coordinate

            from relative_interface.srv import _relate_coordinate
            if _relate_coordinate.Metaclass_RelateCoordinate_Request._TYPE_SUPPORT is None:
                _relate_coordinate.Metaclass_RelateCoordinate_Request.__import_type_support__()
            if _relate_coordinate.Metaclass_RelateCoordinate_Response._TYPE_SUPPORT is None:
                _relate_coordinate.Metaclass_RelateCoordinate_Response.__import_type_support__()


class RelateCoordinate(metaclass=Metaclass_RelateCoordinate):
    from relative_interface.srv._relate_coordinate import RelateCoordinate_Request as Request
    from relative_interface.srv._relate_coordinate import RelateCoordinate_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
