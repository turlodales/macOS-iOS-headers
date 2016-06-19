//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLStructType.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface MTLStructTypeInternal : MTLStructType
{
    NSDictionary *_dictionary;
    NSArray *_members;
}

- (id)members;
- (id)description;
- (id)describe;
- (void)dealloc;
- (id)memberByName:(id)arg1;
- (id)initWithMembers:(id *)arg1 count:(unsigned long long)arg2;

@end

