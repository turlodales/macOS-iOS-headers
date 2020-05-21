//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct map<int, std::__1::vector<float, std::__1::allocator<float>>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::vector<float, std::__1::allocator<float>>>>> {
    struct __tree<std::__1::__value_type<int, std::__1::vector<float, std::__1::allocator<float>>>, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::vector<float, std::__1::allocator<float>>>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::vector<float, std::__1::allocator<float>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::vector<float, std::__1::allocator<float>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::vector<float, std::__1::allocator<float>>>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct vImage_Buffer {
    void *data;
    unsigned long long height;
    unsigned long long width;
    unsigned long long rowBytes;
};

struct vector<float, std::__1::allocator<float>>;

struct vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>> {
    struct vector<float, std::__1::allocator<float>> *_field1;
    struct vector<float, std::__1::allocator<float>> *_field2;
    struct __compressed_pair<std::__1::vector<float, std::__1::allocator<float>>*, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>> {
        struct vector<float, std::__1::allocator<float>> *_field1;
    } _field3;
};

struct vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>>>> {
    vector_e130d805 *_field1;
    vector_e130d805 *_field2;
    struct __compressed_pair<std::__1::vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>>*, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>>>> {
        vector_e130d805 *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    struct *_field1;
    int _field2;
    double _field3;
    double _field4;
} CDStruct_7012203e;

// Template types
typedef struct map<int, std::__1::vector<float, std::__1::allocator<float>>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::vector<float, std::__1::allocator<float>>>>> {
    struct __tree<std::__1::__value_type<int, std::__1::vector<float, std::__1::allocator<float>>>, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::vector<float, std::__1::allocator<float>>>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::vector<float, std::__1::allocator<float>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::vector<float, std::__1::allocator<float>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::vector<float, std::__1::allocator<float>>>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_5c615d34;

typedef struct vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>> {
    struct vector<float, std::__1::allocator<float>> *_field1;
    struct vector<float, std::__1::allocator<float>> *_field2;
    struct __compressed_pair<std::__1::vector<float, std::__1::allocator<float>>*, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>> {
        struct vector<float, std::__1::allocator<float>> *_field1;
    } _field3;
} vector_e130d805;

typedef struct vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>>>> {
    vector_e130d805 *_field1;
    vector_e130d805 *_field2;
    struct __compressed_pair<std::__1::vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>>*, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>>>> {
        vector_e130d805 *_field1;
    } _field3;
} vector_00ef371e;

