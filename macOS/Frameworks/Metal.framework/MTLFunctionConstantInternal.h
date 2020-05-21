//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLFunctionConstant.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLFunctionConstantInternal : MTLFunctionConstant
{
    NSString *_name;
    unsigned long long _type;
    unsigned long long _index;
    BOOL _required;
}

- (BOOL)required;
- (unsigned long long)index;
- (unsigned long long)type;
- (id)name;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3 required:(BOOL)arg4;

@end

