//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSKeySetBinding.h>

__attribute__((visibility("hidden")))
@interface _NSKVCPIvarSetBinding : NSKeySetBinding
{
    long long offset;
    CDUnknownFunctionPointerType set;
}

- (BOOL)isScalarProperty;
- (void)setValue:(id)arg1 inObject:(id)arg2;
- (id)initWithSetFunc:(CDUnknownFunctionPointerType)arg1 ivarOffset:(long long)arg2;

@end

