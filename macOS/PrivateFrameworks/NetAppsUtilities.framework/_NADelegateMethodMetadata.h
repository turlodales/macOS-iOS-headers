//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMethodSignature;

__attribute__((visibility("hidden")))
@interface _NADelegateMethodMetadata : NSObject
{
    NSMethodSignature *_methodSignature;
    CDUnknownBlockType _customHandler;
    NSDictionary *_customLogSettingsByArgumentIndex;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *customLogSettingsByArgumentIndex; // @synthesize customLogSettingsByArgumentIndex=_customLogSettingsByArgumentIndex;
@property(copy, nonatomic) CDUnknownBlockType customHandler; // @synthesize customHandler=_customHandler;
@property(retain, nonatomic) NSMethodSignature *methodSignature; // @synthesize methodSignature=_methodSignature;

@end

