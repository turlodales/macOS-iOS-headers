//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

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

