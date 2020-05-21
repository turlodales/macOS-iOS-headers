//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAction.h"

#import "NSSpeechSynthesizerDelegate.h"

@class NSSpeechSynthesizer, NSString;

@interface WFSpeakTextAction : WFAction <NSSpeechSynthesizerDelegate>
{
    NSSpeechSynthesizer *_synthesizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSpeechSynthesizer *synthesizer; // @synthesize synthesizer=_synthesizer;
- (void)cleanupSpeechSynthesizer;
- (void)speechSynthesizer:(id)arg1 willSpeakWord:(struct _NSRange)arg2 ofString:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2;
- (void)speakTextUsingSynthesizer:(id)arg1;
- (void)cancel;
- (void)runAsynchronouslyWithInput:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

