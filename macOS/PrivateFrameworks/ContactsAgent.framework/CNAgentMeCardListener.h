//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact;

@interface CNAgentMeCardListener : NSObject
{
    CNContact *_meContact;
}

+ (id)meContact;
+ (id)_sharedInstance;
- (void).cxx_destruct;
- (void)_meContactChanged:(id)arg1;
@property(retain) CNContact *meContact;
- (void)dealloc;
- (id)init;

@end

