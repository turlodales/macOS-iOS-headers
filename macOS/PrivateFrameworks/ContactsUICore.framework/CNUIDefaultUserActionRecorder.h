//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNUIUserActionRecorder.h"

@class CRRecentContactsLibrary, NSString;

@interface CNUIDefaultUserActionRecorder : NSObject <CNUIUserActionRecorder>
{
    CRRecentContactsLibrary *_library;
    id <CNUIDefaultUserActionRecorderEventFactory> _eventFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNUIDefaultUserActionRecorderEventFactory> eventFactory; // @synthesize eventFactory=_eventFactory;
@property(readonly, nonatomic) CRRecentContactsLibrary *library; // @synthesize library=_library;
- (void)recordUserAction:(id)arg1;
- (id)initWithRecentsLibrary:(id)arg1 eventFactory:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

