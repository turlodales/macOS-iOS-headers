//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _INPBDataString, _INPBIntentMetadata;

@protocol _INPBSetCarLockStatusIntent <NSObject>
@property(nonatomic) BOOL hasLocked;
@property(nonatomic) BOOL locked;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) BOOL hasCarName;
@property(retain, nonatomic) _INPBDataString *carName;
@end

