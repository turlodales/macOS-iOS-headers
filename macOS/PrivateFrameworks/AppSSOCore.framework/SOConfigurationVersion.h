//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SOConfigurationVersion : NSObject
{
    long long _mode;
    int _token;
    unsigned long long _version;
}

+ (void)reset;
- (void)_setStateAndNotify:(unsigned long long)arg1;
- (unsigned long long)_state;
@property(readonly, nonatomic) long long version;
- (void)setAppSSOUnavailable;
- (void)increaseVersionWithMessage:(id)arg1;
- (long long)checkVersion;
- (void)dealloc;
- (id)initWithMode:(long long)arg1;

@end

