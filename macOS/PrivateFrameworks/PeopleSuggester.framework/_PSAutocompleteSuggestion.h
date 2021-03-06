//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface _PSAutocompleteSuggestion : NSObject <NSSecureCoding>
{
    NSString *_chatGuid;
    NSArray *_chatHandles;
    NSString *_displayName;
    NSString *_handle;
    NSString *_contactIdentifier;
    unsigned long long _resultSourceType;
    NSArray *_recipients;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) unsigned long long resultSourceType; // @synthesize resultSourceType=_resultSourceType;
@property(readonly, copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly, copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSArray *chatHandles; // @synthesize chatHandles=_chatHandles;
@property(readonly, copy, nonatomic) NSString *chatGuid; // @synthesize chatGuid=_chatGuid;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithChatGuid:(id)arg1 chatHandles:(id)arg2 displayName:(id)arg3 handle:(id)arg4 contactIdentifier:(id)arg5 resultSourceType:(unsigned long long)arg6 autocompleteResult:(id)arg7 recipients:(id)arg8;
- (id)initWithChatGuid:(id)arg1 chatHandles:(id)arg2 displayName:(id)arg3 handle:(id)arg4 contactIdentifier:(id)arg5 resultSourceType:(unsigned long long)arg6 autocompleteResult:(id)arg7;
- (id)initWithChatGuid:(id)arg1 displayName:(id)arg2 handle:(id)arg3 contactIdentifier:(id)arg4 resultSourceType:(unsigned long long)arg5 autocompleteResult:(id)arg6;

@end

