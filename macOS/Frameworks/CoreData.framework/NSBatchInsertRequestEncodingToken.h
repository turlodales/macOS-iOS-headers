//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSInputStream, NSString;

__attribute__((visibility("hidden")))
@interface NSBatchInsertRequestEncodingToken : NSObject <NSSecureCoding>
{
    NSString *_entityName;
    NSArray *_objectsToInsert;
    NSInputStream *_inputStream;
    unsigned long long _resultType;
    BOOL _secure;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL secure; // @synthesize secure=_secure;
@property(readonly, nonatomic) unsigned long long resultType; // @synthesize resultType=_resultType;
@property(readonly, retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(readonly, retain, nonatomic) NSArray *objectsToInsert; // @synthesize objectsToInsert=_objectsToInsert;
@property(readonly, retain, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initForRequest:(id)arg1;

@end

