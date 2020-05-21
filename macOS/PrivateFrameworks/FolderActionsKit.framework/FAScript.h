//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FolderActionsKit/FAScriptableObject.h>

#import "NSSecureCoding.h"

@class NSData, NSNumber, NSString, NSURL;

@interface FAScript : FAScriptableObject <NSSecureCoding>
{
    NSURL *_url;
    NSNumber *_enabled;
    BOOL _isWorkflow;
    BOOL _propagateChangesToFolderActionsDispatcher;
    NSData *_bookmark;
}

+ (id)scriptWithBookmark:(id)arg1 name:(id)arg2 enabled:(id)arg3;
+ (id)scriptWithURL:(id)arg1;
+ (id)scriptWithURL:(id)arg1 enabled:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)keyInContainer;
- (void).cxx_destruct;
@property BOOL propagateChangesToFolderActionsDispatcher; // @synthesize propagateChangesToFolderActionsDispatcher=_propagateChangesToFolderActionsDispatcher;
@property BOOL isWorkflow; // @synthesize isWorkflow=_isWorkflow;
@property(retain) NSData *bookmark; // @synthesize bookmark=_bookmark;
- (void)encodeWithCoder:(id)arg1;
- (id)deleteVerb:(id)arg1;
- (void)updateName;
- (void)propagateNewURLOrSetScriptError:(id)arg1;
@property(retain, nonatomic) NSString *posixPath;
@property(retain, nonatomic) NSString *hfsPath;
@property(retain, nonatomic) NSNumber *enabled;
@property(retain, nonatomic) NSURL *url;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

