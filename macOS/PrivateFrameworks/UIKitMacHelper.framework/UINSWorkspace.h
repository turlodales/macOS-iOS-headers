//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UINSWorkspace : NSObject
{
    id <UINSHidManager> _hidManager;
    id <UINSTextInput> _textInput;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <UINSTextInput> textInput; // @synthesize textInput=_textInput;
@property(readonly, nonatomic) id <UINSHidManager> hidManager; // @synthesize hidManager=_hidManager;
@property(readonly, nonatomic) id <UINSApplication> application;
- (id)init;

@end

