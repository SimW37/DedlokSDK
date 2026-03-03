# Source2 SDK – Deadlock

An automatically synced mirror of the `deadlock` branch from [neverlosecc/source2sdk](https://github.com/neverlosecc/source2sdk).

## About

This repository tracks the `deadlock` branch of the upstream Source2 SDK. A GitHub Actions workflow runs daily to check for new commits and force-pushes any updates, keeping this fork in sync without manual intervention.

## How It Works

A scheduled workflow (`sync.yml`) runs once per day at midnight UTC. It compares the latest commit hash on the upstream `deadlock` branch against this repository's `deadlock` branch. If they differ, it fetches and pushes the new commits. If they match, the workflow exits early.

The sync can also be triggered manually via `workflow_dispatch`.

## Upstream

All SDK content originates from [neverlosecc/source2sdk](https://github.com/neverlosecc/source2sdk) (deadlock branch).
