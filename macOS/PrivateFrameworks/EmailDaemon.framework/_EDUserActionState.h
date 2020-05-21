//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface _EDUserActionState : NSObject
{
    BOOL _scrolledToEnd;
    BOOL _mutedThread;
    NSDate *_viewingStarted;
    id <ECMessage> _message;
    NSString *_key;
    NSString *_cellStyle;
    NSString *_messageListType;
    long long _row;
}

- (void).cxx_destruct;
@property(nonatomic) long long row; // @synthesize row=_row;
@property(copy, nonatomic) NSString *messageListType; // @synthesize messageListType=_messageListType;
@property(copy, nonatomic) NSString *cellStyle; // @synthesize cellStyle=_cellStyle;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) BOOL mutedThread; // @synthesize mutedThread=_mutedThread;
@property(nonatomic) BOOL scrolledToEnd; // @synthesize scrolledToEnd=_scrolledToEnd;
@property(retain, nonatomic) id <ECMessage> message; // @synthesize message=_message;
@property(retain, nonatomic) NSDate *viewingStarted; // @synthesize viewingStarted=_viewingStarted;

@end

