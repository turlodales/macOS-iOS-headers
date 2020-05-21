//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface CSSearchContext : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _queryID;
    NSString *_userQuery;
    unsigned long long _maxItemsCount;
    NSString *_keyboardLanguage;
    NSArray *_preferredLanguages;
    NSString *_markedText;
    unsigned long long _markedTextStart;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) unsigned long long markedTextStart; // @synthesize markedTextStart=_markedTextStart;
@property(readonly) NSString *markedText; // @synthesize markedText=_markedText;
@property(readonly) NSArray *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
@property(readonly) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property(readonly) unsigned long long maxItemsCount; // @synthesize maxItemsCount=_maxItemsCount;
@property(readonly) NSString *userQuery; // @synthesize userQuery=_userQuery;
@property(readonly) unsigned long long queryID; // @synthesize queryID=_queryID;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithQueryID:(unsigned long long)arg1 userQuery:(id)arg2 maxItemsCount:(unsigned long long)arg3 keyboardLanguage:(id)arg4 preferredLanguages:(id)arg5 markedText:(id)arg6 markedTextStart:(unsigned long long)arg7;
- (id)initWithQueryID:(unsigned long long)arg1 userQuery:(id)arg2 maxItemsCount:(unsigned long long)arg3 keyboardLanguage:(id)arg4 preferredLanguages:(id)arg5;

@end

