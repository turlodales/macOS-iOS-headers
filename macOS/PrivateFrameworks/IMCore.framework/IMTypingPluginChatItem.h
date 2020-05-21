//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMCore/IMTypingChatItem.h>

#import "IMPluginChatItemProtocol.h"

@class IMBalloonPluginDataSource, NSData, NSString;

@interface IMTypingPluginChatItem : IMTypingChatItem <IMPluginChatItemProtocol>
{
    NSData *_typingIndicatorIcon;
    IMBalloonPluginDataSource *_dataSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IMBalloonPluginDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSData *typingIndicatorIcon; // @synthesize typingIndicatorIcon=_typingIndicatorIcon;
- (id)_initWithItem:(id)arg1 dataSource:(id)arg2;
@property(readonly, retain, nonatomic) NSString *type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isFromMe;
@property(readonly) Class superclass;

@end

