//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_xpc_object>, NSString;

@interface NEFileHandleMaintainer : NSObject
{
    BOOL _changed;
    BOOL _isOwnerMode;
    NSMutableArray *_fileHandles;
    CDUnknownBlockType _receivedHandlesCallback;
    NSObject<OS_xpc_object> *_auxiliaryDataDictionary;
    NSString *_eventName;
}

+ (id)sharedMaintainer;
- (void).cxx_destruct;
@property(retain) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain) NSObject<OS_xpc_object> *auxiliaryDataDictionary; // @synthesize auxiliaryDataDictionary=_auxiliaryDataDictionary;
@property BOOL isOwnerMode; // @synthesize isOwnerMode=_isOwnerMode;
@property(copy) CDUnknownBlockType receivedHandlesCallback; // @synthesize receivedHandlesCallback=_receivedHandlesCallback;
@property BOOL changed; // @synthesize changed=_changed;
@property(retain) NSMutableArray *fileHandles; // @synthesize fileHandles=_fileHandles;
- (id)copyAuxiliaryDataForKey:(id)arg1;
- (void)setAuxiliaryData:(id)arg1 forKey:(id)arg2;
- (void)iterateFileHandlesWithBlock:(CDUnknownBlockType)arg1;
- (void)setFileHandle:(id)arg1 matchingPredicate:(CDUnknownBlockType)arg2;
- (void)removeFileHandleMatchingPredicate:(CDUnknownBlockType)arg1;
- (void)commit;
- (id)createEvent;
- (void)startOwnerModeWithEventName:(id)arg1 handlesReceivedCallback:(CDUnknownBlockType)arg2;
- (void)resetFileHandlesFromEvent:(id)arg1;
- (id)init;

@end

