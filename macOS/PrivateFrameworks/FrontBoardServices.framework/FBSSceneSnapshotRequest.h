//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"

@class FBSSceneSettings, NSString;

@interface FBSSceneSnapshotRequest : NSObject <BSXPCCoding>
{
    NSString *_sceneID;
    FBSSceneSettings *_settings;
    BOOL _handled;
    id <FBSSceneSnapshotRequestDelegate> _delegate;
    BOOL _allowsProtectedContent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL allowsProtectedContent; // @synthesize allowsProtectedContent=_allowsProtectedContent;
@property(readonly, copy, nonatomic) FBSSceneSettings *settings; // @synthesize settings=_settings;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(nonatomic) __weak id <FBSSceneSnapshotRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (BOOL)performSnapshotWithContext:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)initWithSettings:(id)arg1 allowsProtectedContent:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

