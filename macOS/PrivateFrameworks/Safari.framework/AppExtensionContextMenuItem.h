//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AppExtensionContextMenu, NSString;

__attribute__((visibility("hidden")))
@interface AppExtensionContextMenuItem : NSObject
{
    AppExtensionContextMenu *_contextMenu;
    NSString *_text;
    NSString *_command;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *command; // @synthesize command=_command;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) __weak AppExtensionContextMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
- (id)userInfoForPageUUID:(id)arg1;
- (id)initWithAppExtensionContextMenu:(id)arg1 text:(id)arg2 command:(id)arg3;

@end

