//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_transaction;

@interface ActivityTracker : NSObject
{
    NSString *_description;
    NSObject<OS_os_transaction> *_transaction;
    CDUnknownBlockType _activityUpdateBlock;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType activityUpdateBlock; // @synthesize activityUpdateBlock=_activityUpdateBlock;
- (void)setActive:(BOOL)arg1;
- (id)initWithDescription:(id)arg1;

@end

