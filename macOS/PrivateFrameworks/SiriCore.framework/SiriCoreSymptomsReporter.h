//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SiriCoreSymptomsReporter : NSObject
{
}

+ (id)sharedInstance;
- (void)reportIssueForType:(id)arg1 subType:(id)arg2 context:(id)arg3 processIdentifier:(int)arg4 walkboutStatus:(BOOL)arg5;
- (id)_subtypeContextStringFromContext:(id)arg1;
- (void)reportIssueForError:(id)arg1 type:(long long)arg2 context:(id)arg3 processIdentifier:(int)arg4 walkboutStatus:(BOOL)arg5 triggerForIDSIdentifiers:(id)arg6;
- (id)_processNameForPid:(int)arg1;
- (void)_getTypeForError:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

