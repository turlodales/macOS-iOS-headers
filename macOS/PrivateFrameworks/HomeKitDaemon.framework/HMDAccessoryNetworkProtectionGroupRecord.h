//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDAccessoryNetworkProtectionGroup;

@interface HMDAccessoryNetworkProtectionGroupRecord : NSObject
{
    BOOL _active;
    BOOL _persisted;
    HMDAccessoryNetworkProtectionGroup *_group;
}

+ (id)recordWithGroup:(id)arg1 active:(BOOL)arg2 persisted:(BOOL)arg3;
- (void).cxx_destruct;
@property(readonly) HMDAccessoryNetworkProtectionGroup *group; // @synthesize group=_group;
@property(nonatomic, getter=isPersisted) BOOL persisted; // @synthesize persisted=_persisted;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
- (id)initWithGroup:(id)arg1 active:(BOOL)arg2 persisted:(BOOL)arg3;

@end

