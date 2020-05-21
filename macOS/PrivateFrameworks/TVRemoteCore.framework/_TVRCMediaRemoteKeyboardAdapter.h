//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, NSTimer, _TVRCMRTelevisionWrapper;

@interface _TVRCMediaRemoteKeyboardAdapter : NSObject
{
    _TVRCMRTelevisionWrapper *_television;
    id <_TVRCMediaRemoteKeyboardAdapterDelegate> _delegate;
    NSString *_text;
    NSMutableArray *_typedStringsAwaitingAcknowledgement;
    NSTimer *_acknowledgementTimer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSTimer *acknowledgementTimer; // @synthesize acknowledgementTimer=_acknowledgementTimer;
@property(retain, nonatomic) NSMutableArray *typedStringsAwaitingAcknowledgement; // @synthesize typedStringsAwaitingAcknowledgement=_typedStringsAwaitingAcknowledgement;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak id <_TVRCMediaRemoteKeyboardAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _TVRCMRTelevisionWrapper *television; // @synthesize television=_television;
- (void)_resetTextValueToSessionValue;
- (void)_acknowledgementTimerExpired:(id)arg1;
- (void)receivedRemotelyUpdatedText:(id)arg1;
- (void)userEnteredText:(id)arg1;
- (void)sessionEnded;
- (void)sessionBeganWithInitialText:(id)arg1;
- (id)init;

@end

