//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNHandle.h"

@class NSString;

@interface CNHandle : NSObject <CNHandle>
{
    NSString *_stringValue;
    unsigned long long _type;
    NSString *_customIdentifier;
}

+ (id)keyTypeMapping;
+ (unsigned long long)handleTypeForPropertyKey:(id)arg1;
+ (id)tuHandleTypeMap;
+ (long long)tuHandleTypeFromType:(unsigned long long)arg1;
+ (id)tuHandleForHandle:(id)arg1;
+ (id)inPersonHandleTypeMap;
+ (long long)inPersonHandleTypeForType:(unsigned long long)arg1;
+ (id)inPersonHandleForHandle:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *customIdentifier; // @synthesize customIdentifier=_customIdentifier;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (id)initWithStringValue:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithStringValue:(id)arg1 customIdentifier:(id)arg2 type:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

