//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface _NCWidgetPreferences : NSObject
{
    NSXPCConnection *_connection;
    _Bool _waitingForReconnect;
    id <_NCWidgetPreferencesDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <_NCWidgetPreferencesDelegate> delegate; // @synthesize delegate=_delegate;
- (void)widgetPrefsStateChanged;
- (void)_setupConnection;
- (void)_disconnected;
- (void)_connectionAvailable:(id)arg1;
- (void)getAllItems:(CDUnknownBlockType)arg1;
- (void)setWidgetIdentifier:(id)arg1 enabled:(_Bool)arg2;
- (void)moveWidgetIdentifier:(id)arg1 afterWidget:(id)arg2;
- (id)init;

@end

