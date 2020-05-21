//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@interface IMAPResponse : NSObject
{
    BOOL _wasHandled;
    NSString *_tag;
    NSError *_error;
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;
+ (id)newIMAPResponseWithConnection:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(nonatomic) BOOL wasHandled; // @synthesize wasHandled=_wasHandled;
- (id)description;
@property(readonly, nonatomic) BOOL isUntagged;

@end

