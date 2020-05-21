//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSHIPresentationInstance, _NSFullScreenSpace;

__attribute__((visibility("hidden")))
@interface _NSFullScreenContentController : NSObject
{
    _NSFullScreenSpace *_space;
    BOOL _presentationInstanceHasInitializedSpace;
    NSHIPresentationInstance *_presentationInstance;
    unsigned long long _presentationOptions;
    BOOL _performingTileResizeToFit;
    BOOL _reactingToTileResizeNotification;
    BOOL _hasInvalidTileFrame;
    BOOL _appInitiatedInvalidTileResizeToFit;
    NSArray *_frozenWids;
    _NSFullScreenContentController *_surrogateContentController;
    BOOL _preventsResigningAsPrincipalWindow;
}

+ (unsigned long long)_defaultPresentationOptions;
- (void).cxx_destruct;
@property(nonatomic) BOOL preventsResigningAsPrincipalWindow; // @synthesize preventsResigningAsPrincipalWindow=_preventsResigningAsPrincipalWindow;
@property(nonatomic) __weak _NSFullScreenContentController *surrogateContentController; // @synthesize surrogateContentController=_surrogateContentController;
@property(nonatomic) unsigned long long presentationOptions; // @synthesize presentationOptions=_presentationOptions;
@property(retain, nonatomic) NSHIPresentationInstance *presentationInstance; // @synthesize presentationInstance=_presentationInstance;
@property(retain, nonatomic) _NSFullScreenSpace *space; // @synthesize space=_space;
- (void)addSiblingWindow:(long long)arg1 position:(unsigned long long)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)queryCanAddSiblingWindow:(long long)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (BOOL)isOnActiveSpace;
- (void)endLiveResize;
- (void)startLiveResize;
- (id)windowIDsForSnapshot;
- (BOOL)sharesTileWithOtherTabs;
- (BOOL)disableMCExit;
- (BOOL)performTileResizeToFit:(struct CGSize)arg1 acceptIncorrectSize:(BOOL)arg2;
- (BOOL)performTileResizeToFit:(struct CGSize)arg1;
- (id)cursorForResizeDirection:(long long)arg1;
- (id)currentDividerResizeDirections;
- (BOOL)performDividerDragWithEvent:(id)arg1 forResizeDirection:(long long)arg2;
- (void)thawWindows;
- (void)freezeWindows;
- (id)windowIDsToFreeze;
- (id)menuBarCompanionController;
- (void)displayChanged;
- (void)reshapeContentForTileFrame:(struct CGRect)arg1 fromFrame:(struct CGRect)arg2;
- (unsigned int)contentOwnerConnectionID;
- (id)screen;
- (void)activateFullScreenPresentationOptions;
- (BOOL)isPrincipalInSpace;
- (BOOL)setAsThePrincipalFullScreenWindowInSpace;
- (BOOL)resignPrincipalFullScreenWindowInSpace;
- (void)_discardPresentationInstance;
- (void)_makePresentationInstanceIfNeeded;
- (void)parentSpaceDidChange;
- (struct CGRect)contentWindowFrame;
- (unsigned int)contentWindowID;
- (id)fullScreenStorage;
- (void)dispose;
- (void)dealloc;
- (id)init;

@end

