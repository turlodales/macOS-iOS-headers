//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFEWSResponseOperation.h>

@class EWSCreateFolderResponseType, NSString;

@interface MFEWSCreateFolderResponseOperation : MFEWSResponseOperation
{
    NSString *_createdFolderId;
}

- (void).cxx_destruct;
@property(copy) NSString *createdFolderId; // @synthesize createdFolderId=_createdFolderId;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;
@property(retain) EWSCreateFolderResponseType *response;

@end

