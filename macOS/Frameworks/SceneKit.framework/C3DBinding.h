//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface C3DBinding : NSObject
{
    id sourceObject;
    NSString *keyPathSrc;
    NSString *keyPathDst;
    NSDictionary *options;
}

@property(retain, nonatomic) NSDictionary *options; // @synthesize options;
@property(retain, nonatomic) NSString *keyPathDst; // @synthesize keyPathDst;
@property(retain, nonatomic) NSString *keyPathSrc; // @synthesize keyPathSrc;
@property(retain, nonatomic) id sourceObject; // @synthesize sourceObject;
- (void)dealloc;

@end

