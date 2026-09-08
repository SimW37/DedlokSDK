# Sync

Keeps this repository’s `deadlock` branch in sync with [neverlosecc/source2sdk](https://github.com/neverlosecc/source2sdk/tree/deadlock).

Runs daily at midnight UTC, or manually through GitHub Actions. If the branches match, it skips the update. Otherwise, it force-pushes the upstream branch to this repository.

**Changes made only to this repository’s `deadlock` branch will be overwritten.**

Save the workflow in `.github/workflows/sync.yml` and give `GITHUB_TOKEN` permission to write repository contents.
