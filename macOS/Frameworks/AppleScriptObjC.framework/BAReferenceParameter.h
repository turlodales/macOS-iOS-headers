//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BAReferenceParameter : NSObject
{
    void *_storage;
    NSString *_encoding;
    BOOL _modifier;
}

- (BOOL)modifier;
- (id)descriptor;
- (void *)storage;
- (void)dealloc;
- (id)initWithEncoding:(const char *)arg1 modifier:(BOOL)arg2;
- (id)initWithEncoding:(const char *)arg1;

@end

