//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSRequestOperation.h>

@class MFEWSGetFolderResponseOperation, NSArray;

@interface MFEWSGetFolderRequestOperation : MFEWSRequestOperation
{
    NSArray *_EWSFolderIds;
    NSArray *_additionalProperties;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *additionalProperties; // @synthesize additionalProperties=_additionalProperties;
@property(readonly, copy, nonatomic) NSArray *EWSFolderIds; // @synthesize EWSFolderIds=_EWSFolderIds;
- (id)newResponseOperationWithGateway:(id)arg1 errorHandler:(id)arg2;
@property(retain, nonatomic) MFEWSGetFolderResponseOperation *responseOperation;
- (id)prepareRequest;
- (BOOL)isFolderRequest;
- (id)activityString;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (id)initWithEWSFolderIds:(id)arg1 additionalProperties:(id)arg2 gateway:(id)arg3 errorHandler:(id)arg4;

@end

