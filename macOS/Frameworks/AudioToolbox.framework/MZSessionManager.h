//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MZSessionManager : NSObject
{
    id _sharedApplication;
}

+ (id)instance;
- (void).cxx_destruct;
- (unsigned char)sessionCanActivate;
- (void)handleEnteredForeground:(id)arg1;
- (void)handleEnteredBackground:(id)arg1;
- (id)init;

@end

