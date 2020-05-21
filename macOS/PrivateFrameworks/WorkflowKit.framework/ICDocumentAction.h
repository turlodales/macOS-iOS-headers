//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/ICAction.h>

@class NSArray;

@interface ICDocumentAction : ICAction
{
    NSArray *_inputContentClasses;
    NSArray *_fileTypes;
}

- (void).cxx_destruct;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (id)fileTypeForOpeningItem:(id)arg1;
- (id)inputContentClasses;
@property(readonly, nonatomic) NSArray *fileTypes; // @synthesize fileTypes=_fileTypes;
- (id)descriptionDictionary;
- (id)identifier;
- (id)name;

@end

