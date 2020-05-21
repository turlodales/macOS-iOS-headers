//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioServerDriver/ASDObject.h>

#import "ASDDeviceConfigurationChangeDelegate.h"
#import "ASDPropertyChangedDelegate.h"

@class NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface ASDPlugin : ASDObject <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate>
{
    NSMapTable *_objects;
    NSObject<OS_dispatch_queue> *_objectQueue;
    NSMutableDictionary *_boxes;
    NSObject<OS_dispatch_queue> *_boxQueue;
    NSMutableDictionary *_audioDevices;
    NSObject<OS_dispatch_queue> *_audioDeviceQueue;
    NSMutableDictionary *_clockDevices;
    NSObject<OS_dispatch_queue> *_clockDeviceQueue;
    NSString *_manufacturerName;
    unsigned int _nextObjectID;
    struct AudioServerPlugInDriverInterface *_interfacePtr;
    struct AudioServerPlugInDriverInterface **_driverRef;
    struct AudioServerPlugInHostInterface *_pluginHost;
    unsigned int _pluginRefCount;
    NSObject<OS_dispatch_queue> *_powerNotificationQueue;
    struct IONotificationPort *_powerNotificationPort;
    unsigned int _powerConnection;
    unsigned int _powerNotifier;
    unsigned int _transportType;
    NSString *_bundleID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) struct AudioServerPlugInDriverInterface **driverRef; // @synthesize driverRef=_driverRef;
- (id)driverClassName;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2;
- (BOOL)deregisterForSystemSleepNotifications;
- (void)systemHasPoweredOn;
- (void)systemWillSleep;
- (void)_handlePowerNotificationWithMessageType:(unsigned int)arg1 andArgument:(long long)arg2;
- (BOOL)registerForSystemSleepNotifications;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (id)arrayForKey:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (id)dictionaryForKey:(id)arg1;
- (id)plugin;
- (BOOL)requestConfigurationChangeForDevice:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)changedProperty:(const struct AudioObjectPropertyAddress *)arg1 forObjectID:(unsigned int)arg2;
- (void)changedProperty:(const struct AudioObjectPropertyAddress *)arg1 forObject:(id)arg2;
- (unsigned int)objectIDForClockDeviceUID:(id)arg1;
- (id)clockDevices;
- (void)removeClockDevices:(id)arg1;
- (void)removeClockDevice:(id)arg1;
- (void)addClockDevices:(id)arg1;
- (void)addClockDevice:(id)arg1;
- (unsigned int)objectIDForBoxUID:(id)arg1;
- (id)boxes;
- (void)removeBox:(id)arg1;
- (void)addBox:(id)arg1;
- (unsigned int)objectIDForDeviceUID:(id)arg1;
- (id)audioDevices;
- (id)devices;
- (void)removeAudioDevices:(id)arg1;
- (void)removeDevices:(id)arg1;
- (void)addAudioDevices:(id)arg1;
- (void)addDevices:(id)arg1;
- (void)removeAudioDevice:(id)arg1;
- (void)removeDevice:(id)arg1;
- (void)addAudioDevice:(id)arg1;
- (void)addDevice:(id)arg1;
- (id)objectForObjectID:(unsigned int)arg1;
- (void)removeCAObject:(id)arg1;
- (void)addCAObject:(id)arg1;
- (unsigned int)removeRef;
- (unsigned int)addRef;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int *)arg4 andData:(void *)arg5 forClient:(int)arg6;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void *)arg3;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress *)arg1;
- (unsigned int)objectClass;
- (void)halInitializeWithPluginHost:(struct AudioServerPlugInHostInterface *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

