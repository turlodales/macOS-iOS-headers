//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Automator/AMWorkflowPersonality.h>

@interface AMServiceWorkflowPersonality : AMWorkflowPersonality
{
}

- (id)pluginHeaderViewController;
- (BOOL)finishSavingDocument:(id)arg1 forOperation:(unsigned long long)arg2 atURL:(id)arg3 error:(id *)arg4;
- (id)infoPlistForWorkflowMetaData:(id)arg1 error:(id *)arg2;
- (id)_infoPlistForServicesDocumentWithMetadata:(id)arg1;
- (id)infoStringForCompleteInstallationWithMetaData:(id)arg1;
- (id)imageRepresentation;
- (id)personalitySettingsDictionary;

@end

