//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@interface _NSConstantArrayEnumerator : NSEnumerator
{
    id *objects;
    unsigned long long capacity;
    unsigned long long index;
}

- (id)nextObject;
- (id)allObjects;
- (id)initWithArray:(id *)arg1 capacity:(unsigned long long)arg2;

@end

