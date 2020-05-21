//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSMutableDictionary, NSString, TKTokenID;

@interface TKTokenKeychainItem : NSObject
{
    NSData *_accessControl;
    id _objectID;
    NSString *_label;
    NSDictionary *_constraints;
    TKTokenID *_tokenID;
}

+ (id)keychainItemWithInfo:(id)arg1;
+ (id)accessControlForConstraints:(id)arg1 tokenID:(id)arg2 error:(id *)arg3;
+ (id)operationMap;
- (void).cxx_destruct;
@property(retain) TKTokenID *tokenID; // @synthesize tokenID=_tokenID;
@property(copy) NSDictionary *constraints; // @synthesize constraints=_constraints;
@property(copy) NSString *label; // @synthesize label=_label;
@property(readonly, copy) id objectID; // @synthesize objectID=_objectID;
- (id)initWithItemInfo:(id)arg1;
@property(readonly, copy) NSMutableDictionary *keychainAttributes; // @dynamic keychainAttributes;
@property(retain) NSData *accessControl;
@property(readonly, copy) NSData *encodedObjectID;
- (id)initWithObjectID:(id)arg1;

@end

