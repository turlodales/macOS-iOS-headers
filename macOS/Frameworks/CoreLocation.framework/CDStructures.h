//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGSize {
    double width;
    double height;
};

struct CLAssertionInternal {
    id _field1;
    struct CLConnectionClient *_field2;
};

struct CLConnectionClient;

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct _CLLocationManagerStateTrackerState {
    double distanceFilter;
    double desiredAccuracy;
    char updatingLocation;
    char requestingLocation;
    char requestingRanging;
    char updatingRanging;
    char updatingHeading;
    double headingFilter;
    char allowsLocationPrompts;
    char allowsAlteredAccessoryLocations;
    char dynamicAccuracyReductionEnabled;
    char previousAuthorizationStatusValid;
    int previousAuthorizationStatus;
    long long activityType;
    int pausesLocationUpdatesAutomatically;
    char paused;
    char allowsBackgroundLocationUpdates;
    char showsBackgroundLocationIndicator;
    char allowsMapCorrection;
    char batchingLocation;
    char updatingVehicleSpeed;
    char updatingVehicleHeading;
    char matchInfoEnabled;
    char groundAltitudeEnabled;
    char courtesyPromptNeeded;
};

struct os_state_hints_s {
    unsigned int _field1;
    char *_field2;
    unsigned int _field3;
    unsigned int _field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
} CDStruct_b7b5e951;

typedef struct {
    double x;
    double y;
    double z;
    double magneticHeading;
    double trueHeading;
    double accuracy;
    double timestamp;
    double temperature;
    double magnitude;
    double inclination;
    int calibration;
} CDStruct_b560b707;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    float _field6;
    float _field7;
    float _field8;
    _Bool _field9;
    int _field10;
    CDStruct_2c43369c _field11;
    double _field12;
    int _field13;
    int _field14;
    _Bool _field15;
    struct {
        double _field1;
        double _field2;
        _Bool _field3;
        _Bool _field4;
    } _field16;
    CDStruct_2c43369c _field17;
    float _field18;
    CDStruct_2c43369c _field19;
    double _field20;
    double _field21;
    int _field22;
    _Bool _field23;
    double _field24;
    double _field25;
    double _field26;
    double _field27;
} CDStruct_44e85285;

typedef struct {
    int suitability;
    CDStruct_2c43369c coordinate;
    double horizontalAccuracy;
    double altitude;
    double verticalAccuracy;
    double speed;
    double speedAccuracy;
    double course;
    double courseAccuracy;
    double timestamp;
    int confidence;
    double lifespan;
    int type;
    CDStruct_2c43369c rawCoordinate;
    double rawCourse;
    int floor;
    unsigned int integrity;
    int referenceFrame;
    int rawReferenceFrame;
    int signalEnvironmentType;
} CDStruct_4d1fbe9a;

typedef struct {
    char identifier[512];
    char onBehalfOfIdentifier[512];
    int type;
    _Bool notifyOnEntry;
    _Bool notifyOnExit;
    _Bool conservativeEntry;
    _Bool emergency;
    union {
        struct {
            char proximityUUID[512];
            unsigned short major;
            unsigned short minor;
            int definitionMask;
            _Bool notifyEntryStateOnDisplay;
        } beaconAttributes;
        struct {
            CDStruct_2c43369c center;
            double radius;
            double desiredAccuracy;
            int referenceFrame;
            _Bool allowMonitoringWhileNearby;
        } circularAttributes;
        struct {
            CDStruct_2c43369c vertices[101];
            int verticesCount;
            int referenceFrame;
            _Bool allowMonitoringWhileNearby;
        } polygonalAttributes;
    } ;
} CDStruct_4c505072;

// Ambiguous groups
typedef struct {
    unsigned long long _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
} CDStruct_789f8997;

