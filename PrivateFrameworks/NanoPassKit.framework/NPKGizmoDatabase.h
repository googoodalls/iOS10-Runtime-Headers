/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKGizmoDatabase : NSObject {
    struct sqlite3 { } * _database;
    NSObject<OS_dispatch_queue> * _dbQueue;
    struct sqlite3_stmt { } * _deleteStatement;
    int  _externallyChangedBroadcasts;
    struct sqlite3_stmt { } * _insertDiffStatement;
    struct sqlite3_stmt { } * _insertStatement;
    bool  _isInTransaction;
    NSArray * _libraryHashes;
    NSMutableDictionary * _manifest;
    bool  _needsMoreLocalNotifyDatabaseChanged;
    bool  _passDBIsAvailable;
    NSMutableArray * _passDescriptions;
    struct sqlite3_stmt { } * _selectDeletePendingStatement;
    struct sqlite3_stmt { } * _selectPassDataStatement;
    struct sqlite3_stmt { } * _selectPassDiffStatement;
    struct sqlite3_stmt { } * _selectPreferredAIDStatement;
    bool  _sendingLocalNotifyDatabaseChanged;
    struct sqlite3_stmt { } * _updateDeletePendingStatment;
    struct sqlite3_stmt { } * _updatePreferredAIDStatement;
}

@property (readonly) struct sqlite3 { }*database;
@property (readonly) struct sqlite3_stmt { }*deleteStatement;
@property (readonly) struct sqlite3_stmt { }*insertDiffStatement;
@property (readonly) struct sqlite3_stmt { }*insertStatement;
@property (readonly) NSData *libraryHash;
@property (readonly) NSDictionary *manifestHashes;
@property (nonatomic, readonly) unsigned long long numberOfPasses;
@property (nonatomic) bool passDBIsAvailable;
@property (readonly) NSArray *passDescriptions;
@property (readonly) struct sqlite3_stmt { }*selectPassDataStatement;
@property (readonly) struct sqlite3_stmt { }*selectPassDiffStatement;
@property (readonly) struct sqlite3_stmt { }*selectPreferredAIDStatement;
@property (readonly) struct sqlite3_stmt { }*updateDeletePendingStatement;
@property (readonly) struct sqlite3_stmt { }*updatePreferredAIDStatement;

+ (id)_migrationDataSource;
+ (id)_migrationDelegateQueue;
+ (unsigned long long)latestWatchOSMajorVersion;
+ (long long)maxDatabaseVersion;
+ (void)setMigrationDataSource:(id)arg1;
+ (id)sharedDatabase;

- (void).cxx_destruct;
- (void)_attemptDatabaseOpen;
- (long long)_databaseVersionExists:(bool*)arg1 valid:(bool*)arg2;
- (id)_decodeObjectOfClass:(Class)arg1 fromStatement:(struct sqlite3_stmt { }*)arg2 column:(int)arg3;
- (id)_decodeObjectOfClasses:(id)arg1 fromStatement:(struct sqlite3_stmt { }*)arg2 column:(int)arg3;
- (id)_diffForUniqueIDLocked:(id)arg1;
- (void)_enumerateAllPassesForMigration:(id /* block */)arg1;
- (bool)_executeSQL:(id)arg1;
- (void)_executeSQLQuery:(id)arg1 processResultsBlock:(id /* block */)arg2;
- (bool)_getDeletePendingForUniqueID:(id)arg1;
- (id)_getPreferredPaymentApplicationForPaymentPass:(id)arg1 aid:(id*)arg2;
- (void)_handleDatabaseChangedExternally;
- (void)_handleFirstUnlock;
- (void)_handleHasMigrationDataSource;
- (void)_insertDatabaseVersionRow:(long long)arg1;
- (id)_libraryHashLockedForWatchOSMajorVersion:(unsigned long long)arg1;
- (void)_loadInitialManifestLocked;
- (bool)_migrateDatabase:(id /* block */)arg1;
- (void)_notifyDatabaseChangedExternally;
- (void)_notifyDatabaseChangedWithNoop:(bool)arg1;
- (void)_notifyDatabaseChangedWithNoop:(bool)arg1 firstUnlock:(bool)arg2;
- (void)_notifyForFirstUnlock;
- (bool)_passDBIsAvailableLocked;
- (id)_passForUniqueIDLocked:(id)arg1;
- (void)_performTransactionWithBlock:(id /* block */)arg1;
- (bool)_preconditionsMetForDatabaseOpen;
- (bool)_removePassWithUniqueIDLocked:(id)arg1;
- (void)_saveDiffLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_savePassLocked:(id)arg1 wasUpdate:(bool*)arg2;
- (bool)_updateCompleteHashesDuringMigration:(id)arg1;
- (void)_updateDatabaseVersionRow:(long long)arg1;
- (bool)_updateDeviceAndPreferredPaymentApplicationsDuringMigration:(id)arg1;
- (bool)_updateDevicePaymentApplicationsDuringMigration:(id)arg1;
- (bool)_updateEffectivePaymentApplicationStateDuringMigration:(id)arg1;
- (bool)_updateEncodedPaymentPassDuringMigration:(id)arg1;
- (bool)_updateHasStoredValueDuringMigration:(id)arg1;
- (bool)_updateHasUserSelectablePaymentApplications:(id)arg1;
- (bool)_updateIngestedDatesDuringMigration:(id)arg1;
- (bool)_updateNFCPayloadDuringMigration:(id)arg1;
- (bool)_updatePrivateLabelAndCobrandDuringMigration:(id)arg1;
- (bool)_updateSettingsDuringMigration:(id)arg1;
- (struct sqlite3 { }*)database;
- (void)dealloc;
- (struct sqlite3_stmt { }*)deleteStatement;
- (id)diffForUniqueID:(id)arg1;
- (void)enumerateAllPassesAndDescriptionsWithBlock:(id /* block */)arg1;
- (void)enumerateAllPassesWithBlock:(id /* block */)arg1;
- (id)filteredPassesUsingPassDescriptionPredicate:(id)arg1;
- (bool)hasPassesMatchingPassDescriptionPredicate:(id)arg1;
- (id)init;
- (struct sqlite3_stmt { }*)insertDiffStatement;
- (struct sqlite3_stmt { }*)insertStatement;
- (id)libraryHash;
- (id)libraryHashForWatchOSMajorVersion:(unsigned long long)arg1;
- (id)manifestHashes;
- (id)manifestHashesForWatchOSMajorVersion:(unsigned long long)arg1;
- (unsigned long long)numberOfPasses;
- (bool)passDBIsAvailable;
- (id)passDescriptions;
- (id)passForUniqueID:(id)arg1;
- (id)preferredPaymentApplicationForPaymentPass:(id)arg1;
- (id)rebuildDatabaseWithPasses:(id)arg1;
- (id)removePassWithUniqueID:(id)arg1;
- (void)saveDiff:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)savePass:(id)arg1;
- (struct sqlite3_stmt { }*)selectDeletePendingStatement;
- (struct sqlite3_stmt { }*)selectPassDataStatement;
- (struct sqlite3_stmt { }*)selectPassDiffStatement;
- (struct sqlite3_stmt { }*)selectPreferredAIDStatement;
- (void)setDeletePending:(bool)arg1 forUniqueID:(id)arg2;
- (void)setPassDBIsAvailable:(bool)arg1;
- (void)setPreferredPaymentApplication:(id)arg1 forPaymentPass:(id)arg2;
- (struct sqlite3_stmt { }*)updateDeletePendingStatement;
- (struct sqlite3_stmt { }*)updatePreferredAIDStatement;

@end
