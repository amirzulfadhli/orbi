# ORBI

**Mars-rover-inspired autonomous robotics project**

ORBI is a planned small rover that explores controlled environments, senses obstacles, reports its status, and eventually supports interactive assistance.

## First release (MVP)

- [ ] Drive with manual commands
- [ ] Sense nearby obstacles
- [ ] Stop safely on obstacles or communication failure
- [ ] Navigate a simple indoor test course
- [ ] Show basic rover telemetry

Advanced features (camera, robotic arm, voice/AI assistant, more complex suspension) are optional later phases, not blockers for the first working rover.

## Repository layout

- `firmware/esp32/` — microcontroller firmware
- `software/pi/` — Raspberry Pi services
- `software/dashboard/` — operator interface
- `hardware/schematics/` — wiring and power designs
- `hardware/cad/` — chassis/mechanical models
- `hardware/bom.csv` — component inventory
- `docs/` — requirements and architecture
- `tests/` — test plans and results
- `devlog/` — dated evidence and development notes

## Hack Club PHANTOM

Confirm eligibility, project rules, AI restrictions, and qualifying time-tracking requirements with the organizers before claiming work hours.

**Transparency:** This initial repository scaffold was created with ChatGPT assistance at the owner's request. It should **not** be counted as independently completed no-AI project work. Implementation, experiments, and project logs should document work actually performed by the builder.

## Current status

Initial repository scaffold only. No functional rover software or hardware implementation has been added yet.
