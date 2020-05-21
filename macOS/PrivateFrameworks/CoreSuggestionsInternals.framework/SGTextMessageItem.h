//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString, SGTextMessage;

@interface SGTextMessageItem : NSObject <NSSecureCoding>
{
    SGTextMessage *_message;
    NSString *_content;
    NSString *_language;
    NSArray *_detectedData;
    NSArray *_features;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSArray *features; // @synthesize features=_features;
@property(readonly) NSArray *detectedData; // @synthesize detectedData=_detectedData;
@property(readonly) NSString *language; // @synthesize language=_language;
@property(readonly) NSString *content; // @synthesize content=_content;
@property(readonly) SGTextMessage *message; // @synthesize message=_message;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextMessage:(id)arg1;
- (id)initWithTextMessage:(id)arg1 andDetectedData:(id)arg2;

@end

