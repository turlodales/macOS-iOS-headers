//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PMLPlistClassWrapper : NSObject
{
    NSString *_classNameKey;
}

- (void).cxx_destruct;
- (id)readObjectWithData:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)writeToDataWithObject:(id)arg1 andChunks:(id)arg2;
- (id)readObjectWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)writeToPlistWithObject:(id)arg1 andChunks:(id)arg2;
- (id)initWithClassNameKey:(id)arg1;

@end

