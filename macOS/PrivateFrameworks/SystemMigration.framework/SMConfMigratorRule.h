//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSSet, NSString, NSURL, SMConfMigratorPlugin;

@interface SMConfMigratorRule : NSObject <NSSecureCoding>
{
    BOOL _overwriteExistingPath;
    BOOL _disableMigratedVersion;
    BOOL _skipIfDestinationExists;
    BOOL _skipIfLegacyServer;
    BOOL _deferredCopy;
    BOOL _allowSIP;
    BOOL _runsAfterRestart;
    BOOL _defaultedCopyRule;
    BOOL _attemptedPluginLoad;
    NSObject *_identifier;
    NSArray *_children;
    unsigned long long _actionType;
    unsigned long long _context;
    NSURL *_path;
    NSString *_maximumSourceVersion;
    NSString *_minimumSourceVersion;
    NSSet *_disallowedSourceVersions;
    NSURL *_alternateDestination;
    NSSet *_skipChecksums;
    NSString *_skipIfOlderThan;
    NSArray *_toolArguments;
    NSURL *_toolPath;
    SMConfMigratorPlugin *_plugin;
}

+ (void)executeSpecificPlugin:(id)arg1;
+ (id)loadPlugin:(id)arg1 forRequest:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property BOOL attemptedPluginLoad; // @synthesize attemptedPluginLoad=_attemptedPluginLoad;
@property(retain) SMConfMigratorPlugin *plugin; // @synthesize plugin=_plugin;
@property(readonly, getter=isDefaultedCopyRule) BOOL defaultedCopyRule; // @synthesize defaultedCopyRule=_defaultedCopyRule;
@property BOOL runsAfterRestart; // @synthesize runsAfterRestart=_runsAfterRestart;
@property BOOL allowSIP; // @synthesize allowSIP=_allowSIP;
@property(retain) NSURL *toolPath; // @synthesize toolPath=_toolPath;
@property(retain) NSArray *toolArguments; // @synthesize toolArguments=_toolArguments;
@property(retain) NSString *skipIfOlderThan; // @synthesize skipIfOlderThan=_skipIfOlderThan;
@property BOOL deferredCopy; // @synthesize deferredCopy=_deferredCopy;
@property BOOL skipIfLegacyServer; // @synthesize skipIfLegacyServer=_skipIfLegacyServer;
@property BOOL skipIfDestinationExists; // @synthesize skipIfDestinationExists=_skipIfDestinationExists;
@property BOOL disableMigratedVersion; // @synthesize disableMigratedVersion=_disableMigratedVersion;
@property BOOL overwriteExistingPath; // @synthesize overwriteExistingPath=_overwriteExistingPath;
@property(retain) NSSet *skipChecksums; // @synthesize skipChecksums=_skipChecksums;
@property(retain) NSURL *alternateDestination; // @synthesize alternateDestination=_alternateDestination;
@property(retain) NSSet *disallowedSourceVersions; // @synthesize disallowedSourceVersions=_disallowedSourceVersions;
@property(retain) NSString *minimumSourceVersion; // @synthesize minimumSourceVersion=_minimumSourceVersion;
@property(retain) NSString *maximumSourceVersion; // @synthesize maximumSourceVersion=_maximumSourceVersion;
@property(retain) NSURL *path; // @synthesize path=_path;
@property unsigned long long context; // @synthesize context=_context;
@property unsigned long long actionType; // @synthesize actionType=_actionType;
@property(retain) NSArray *children; // @synthesize children=_children;
@property(retain) NSObject *identifier; // @synthesize identifier=_identifier;
- (void)executePlugin;
- (double)estimateTime;
- (BOOL)defaultedCopyRule;
- (BOOL)supportedFromSystem:(id)arg1 toSystem:(id)arg2 ofType:(unsigned long long)arg3;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithConfDict:(id)arg1;

@end

