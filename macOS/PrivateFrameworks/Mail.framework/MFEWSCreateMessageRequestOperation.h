//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSCreateItemRequestOperation.h>

#import "NSCoding.h"

@class MCMessage, MFEWSGetItemsResponseOperation, NSData, NSDictionary, NSString;

@interface MFEWSCreateMessageRequestOperation : MFEWSCreateItemRequestOperation <NSCoding>
{
    NSString *_existingItemIdString;
    MCMessage *_message;
    NSData *_data;
    long long _flags;
    NSString *_sender;
    NSDictionary *_recipientsByHeaderKey;
    MFEWSGetItemsResponseOperation *_getItemsResponse;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MFEWSGetItemsResponseOperation *getItemsResponse; // @synthesize getItemsResponse=_getItemsResponse;
@property(readonly, copy, nonatomic) NSDictionary *recipientsByHeaderKey; // @synthesize recipientsByHeaderKey=_recipientsByHeaderKey;
@property(readonly, copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) MCMessage *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *existingItemIdString; // @synthesize existingItemIdString=_existingItemIdString;
- (id)prepareRequest;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFolderIdString:(id)arg1 messageType:(BOOL)arg2 disposition:(long long)arg3 gateway:(id)arg4 errorHandler:(id)arg5;
- (void)_ewsCreateMessageRequestOperationCommonInitWithMessage:(id)arg1 data:(id)arg2 flags:(long long)arg3 existingItemIdString:(id)arg4 sender:(id)arg5 recipientsByHeaderKey:(id)arg6;
- (id)initWithMessage:(id)arg1 data:(id)arg2 folderIdString:(id)arg3 messageType:(BOOL)arg4 flags:(long long)arg5 existingItemIdString:(id)arg6 sender:(id)arg7 recipientsByHeaderKey:(id)arg8 disposition:(long long)arg9 gateway:(id)arg10 errorHandler:(id)arg11;

@end

