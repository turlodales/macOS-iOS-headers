//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAction.h"

@class WFGiphySessionManager;

@interface WFGiphyAction : WFAction
{
    WFGiphySessionManager *_sessionManager;
}

- (void).cxx_destruct;
- (id)targetDataInfo;
- (void)runWithAppKitUserInterface:(id)arg1 input:(id)arg2;
- (void)runWithNoUserInterface;
@property(readonly, nonatomic) WFGiphySessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;

@end

