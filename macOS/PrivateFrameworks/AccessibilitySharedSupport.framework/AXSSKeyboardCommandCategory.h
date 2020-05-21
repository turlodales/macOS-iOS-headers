//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AXSSKeyboardCommandCategory : NSObject
{
    NSArray *_commands;
    NSString *_localizedName;
}

+ (id)_gesturesCommandsFromAvailableCommands:(id)arg1;
+ (id)_deviceCommandsFromAvailableCommands:(id)arg1;
+ (id)_interactionCommandsFromAvailableCommands:(id)arg1;
+ (id)_movementCommandsFromAvailableCommands:(id)arg1;
+ (id)_basicCommandsFromAvailableCommands:(id)arg1;
+ (id)_categoryWithCommands:(id)arg1 availableCommands:(id)arg2 localizedName:(id)arg3;
+ (id)_categoryWithCommandIdentifiers:(id)arg1 availableCommands:(id)arg2 localizedName:(id)arg3;
+ (id)allCategoriesForAvailableCommands:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) NSArray *commands; // @synthesize commands=_commands;
- (id)initWithCommands:(id)arg1 localizedName:(id)arg2;

@end

